#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cpr/cpr.h>

int main() {
    std::cout << "started!" << std::endl;

    // get the first page of all vehicle results from carzone
    const char *URL = "carzone.ie/search/ajax-result/cars/page/%d/sort/price-asc/limit/30";
    std::vector<std::string> results;
    int page = 1;
    
    // length of results is 0 when pagination finished
    do {
        // local vars
        char url_buffer [1024];
        // format the URL and assign it to a std::string (?)
        snprintf(url_buffer, 1023, URL, page);
        std::string ephemeral_url = std::string(url_buffer);

        auto response = cpr::Get(cpr::Url{ephemeral_url});

        std::cout << response.status_code << std::endl;
        

    } while (results.size() > 0);

    return 0;
}
