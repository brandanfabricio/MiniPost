#include <minipost/http/http_method.hpp>
namespace minipost
{

    std::optional<minipost::HttpMethod> stringToHttpMethod(std::string &value)
    {
        if (value == "GET")
        {
            return minipost::HttpMethod::GET;
        }
        if (value == "POST")
        {
            return minipost::HttpMethod::POST;
        }
        if (value == "PUT")
        {

            return minipost::HttpMethod::PUT;
        }
        if (value == "PATCH")
        {
            return minipost::HttpMethod::PATCH;
        }
        if (value == "DELETE")
        {
            return minipost::HttpMethod::DELETE;
        }
        if (value == "HEAD")
        {
            return minipost::HttpMethod::HEAD;
        }
        if (value == "OPTIONS")
        {
            return minipost::HttpMethod::OPTIONS;
        }
        return std::nullopt;
    }

    std::optional<std::string> httpMethodToString(HttpMethod method)
    {
        switch (method)
        {
        case HttpMethod::GET:
            return "GET";
        case HttpMethod::POST:
            return "POST";
        case HttpMethod::PUT:
            return "PUT";
        case HttpMethod::PATCH:
            return "PATCH";
        case HttpMethod::DELETE:
            return "DELETE";
        case HttpMethod::HEAD:
            return "HEAD";
        case HttpMethod::OPTIONS:
            return "OPTIONS";
        default:
            return std::nullopt;
        }
    }
}
