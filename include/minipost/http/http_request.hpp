#pragma once

#include <string>
#include <vector>
#include "http_method.hpp"
namespace minipost
{
    class HttpRequest
    {

    public:
        HttpRequest(HttpMethod method, const std::string &url)
        {
            method_ = method;
            url_ = url;
        }
        HttpMethod getMethod()
        {
            return method_;
        }
        std::string &getUrl()
        {
            return url_;
        }
        void setUrl(std::string &url)
        {
            url_ = url;
        }
        std::vector<std::pair<std::string, std::string>> getHeaders()
        {
            return headers_;
        }
        void addHeader(const std::string &name, const std::string &value)
        {
            headers_.emplace_back(name, value);
        }
        void removeHeader(const std::string &name)
        {
        }
        void cleanHeaders()
        {
            headers_.clear();
        }

        std::string getBody()
        {
            return body_;
        }
        void setBody(std::string &body)
        {
            body_ = body;
        }

    private:
        HttpMethod method_;
        std::string url_;
        std::vector<std::pair<std::string, std::string>> headers_;
        std::string body_;
    };
}