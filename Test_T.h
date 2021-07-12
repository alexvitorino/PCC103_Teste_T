#include <cmath>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>


template <typename Model>
void print_vector(std::vector<Model>& v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        std::cout << *i << " ";
    }
    
}

double mean(const std::vector<double>& data) {
    double soma = 0;
    for (auto i = data.begin(); i != data.end(); i++) {
        soma += *i;
    }
    return soma / data.size();
}

double std_dev(const std::vector<double>& data, double mean) {
    double soma = 0;
    for (int i = 0; i < data.size(); i++) {
        soma = soma + (data[i] - mean) * (data[i] - mean);
    }

    return std::sqrt(soma / data.size() - 1);

}
double gdl(const std::vector<double>& data1, const std::vector<double>& data2){
    int gdl = data1.size() + data2.size() - 2;
    return gdl;
}
double estatistica(const std::vector<double>& data1, const std::vector<double>& data2) {
    int n = data1.size() + data2.size() - 2;
    double m1 = mean(data1);
    double m2 = mean(data2);
    double s1 = std_dev(data1, m1);
    double s2 = std_dev(data2, m2);

    return std::abs((m1 - m2) / std::sqrt((s1 * s1 + s2 * s2) / n));
}