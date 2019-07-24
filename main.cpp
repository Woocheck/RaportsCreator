#include <iostream>
#include <filesystem>


int main()
{
    std::filesystem::path path { "testdir/test.txt" };

    std::cout   << "Current path: " << std::filesystem::current_path()
                << "\nabsolute path: " << std::filesystem::absolute( path )
                << "\nsystem cmplete: " << std::filesystem::canonical( path )
                << "\n";

    
}