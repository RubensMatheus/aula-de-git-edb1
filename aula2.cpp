#include <iostream>
#include <string>
#include <sstream>

std::string to_string(int v[], std::size_t){
    std::ostringstream oss;

}

int main(int argc, char **argv){

    int v[]{5, 0, 0, 3, 0, 0, 8 };
    std :: size_t len{7};

    // imprimir vetor na saida padrão

    std::cout << ">>> vetor original: " << to_string(v, len) << '\n';
    return 0;
}