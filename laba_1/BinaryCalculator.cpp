#include "BinaryCalculator.h"

BinaryCalculator::BinaryCalculator() {

}

BinaryCalculator::BinaryCalculator(int inputFirstNumber, int inputSecondNumber, int pairNumber) {
    this->inputFirstNumber = inputFirstNumber;                  //делимое в десятичной форме
    this->inputSecondNumber = inputSecondNumber;                //делитель в десятичной форме
    this->firstBinaryNumber = _10_to_2_(inputFirstNumber);      //делимое в двоичной форме
    this->secondBinaryNumber = _10_to_2_(inputSecondNumber);    //делитель в двоичной форме
    this->secondBinaryNumberAddCode = _2_to_additional_code(
            this->secondBinaryNumber);              //делитель в двоичной дополнительном коде
    this->pairNumber = pairNumber;                              //номер пары
    this->div = std::vector<int>(4, 0);                 //частное
    this->summ = std::vector<int>(5, 0);                //остаток
}

std::vector<int> BinaryCalculator::_10_to_2_(int x) {
    int i;
    int mod;
    std::vector<int> result;
    long double_ = 0;

    for (i = 0; x > 0; i++) {

        mod = x % 2;
        x = (x - mod) / 2;
        result.push_back(mod);
    }
    return result;
}

std::vector<int> BinaryCalculator::_2_to_additional_code(std::vector<int> binaryNumber) {

}

std::vector<int> BinaryCalculator::binaryAddition(std::vector<int> X1, std::vector<int> X2) {

}