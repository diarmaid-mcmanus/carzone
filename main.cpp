#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <vector>
#include <string>

int main() {
    // get the first page of all vehicle results from carzone
    std::string URL = "http://www.carzone.ie/search/ajax-result/cars/page/%s/sort/price-asc/limit/30";
    std::string url_buffer;
    std::vector<std::string> results;
    int page = 1;

    // length of results is 0 when pagination finished
    do {
        // request a page

        // format the URL
        sprintf(url_buffer, 1023, URL, page);
        std::string ephemeral_url = std::string(url_buffer);
        std::ostringstream result_body;

        result_body << curlpp::options::Url(ephemeral_url);
        
        // connect to the URL
        
        // parse the response
        
        // add results to a list
    } while (results.size() > 0);

//    cURLpp::terminate();
}
