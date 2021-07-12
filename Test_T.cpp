#include <cmath>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>
#include "Test_T.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    std::vector<double> data1 = { 13.0,36.9,3.4,9.6,11.4,24.0,27.1,22.9,3.1,39.8 };
    std::vector<double> data2 = { 7.6,49.2,15.9,25.6,41.6,41.2,5.6,25.2,24.3,41.17 };

    double mean1, mean2, std_dev1, std_dev2;

    mean1 = mean(data1);
    mean2 = mean(data2);

    std_dev1 = std_dev(data1, mean1);
    std_dev2 = std_dev(data2, mean2);

    std::cout << std::setprecision(4);

    std::cout << "Conjunto de Dados 1: [";
    print_vector(data1);
    std::cout << "]"<< std::endl;

    std::cout << "Media do Conjunto de Dados 1 = " << mean1 << std::endl;
    std::cout << "Desvio Padrao do Conjunto de Dados 1 = " << std_dev1 << std::endl;

    std::cout << "Conjunto de Dados 2: [";
    print_vector(data2);
    std::cout << "]" << std::endl;

    std::cout << "Media do Conjunto de Dados 2 = " << mean2 << std::endl;
    std::cout << "Desvio Padrao do Conjunto de Dados 2 = " << std_dev2 << std::endl;

    std::cout << "Graus de Liberdade:: " << gdl(data1, data2) << std::endl;
    std::cout << "O Valor T e Igual a: " << estatistica(data1, data2) << std::endl;


}

