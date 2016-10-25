#include <stdio.h>
#include <vector>
#include <string>

int main() {
    // get the first page of all vehicle results from carzone
    const char *URL = "carzone.ie/search/ajax-result/cars/page/%d/sort/price-asc/limit/30";
    std::vector<std::string> results;
    int page = 1;
    //
    // length of results is 0 when pagination finished
    do {
        // local vars
        char url_buffer [1024];
        // format the URL and assign it to a std::string (?)
//        snprintf(url_buffer, 1023, URL, page);
        

    } while (results.size() > 0);

    return 0;
}
