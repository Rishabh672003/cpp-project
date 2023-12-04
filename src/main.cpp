#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <iostream>
#include <string>
#include <thread>

using tcp = boost::asio::ip::tcp;

int main(int argc, char* argv[]) {
    auto const address = boost::asio::ip::make_address("127.0.0.1");
    auto const ip = static_cast<unsigned short>(std::atoi("8082"));

    boost::asio::io_context ioc{1};

    tcp::acceptor acceptor{ioc, {address, ip}};

    while (true) {
        tcp::socket socket{ioc};
        acceptor.accept(socket);
        std::cout << "socket accepted"
                  << "\n";
    }

    return 0;
}
