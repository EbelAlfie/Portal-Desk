#include <filesystem>
#include <iostream>
#include wifip2pmanager
namespace fs = std::filesystem;

int main()
{
    std::string path = "C:\\";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}
