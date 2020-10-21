#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <iomanip>
class novac {
private:
    long outputNovac;
    double inputNovac;
public:
    novac(long nNovac = 0){
        outputNovac = nNovac;
    }

    long getLong()const { return outputNovac; }

        friend std::ostream& operator<< (std::ostream &out, novac &cNovac){
            out << std::fixed << std::setprecision(2) << (double)cNovac.outputNovac/100;
            return out;
            }

        friend std::istream& operator>> (std::istream &in, novac &cNovac){
            in >> cNovac.inputNovac;
            cNovac.inputNovac *= 100;
            cNovac.inputNoavac += 0.5;
            cNovac.outputNovac = cNovac.inputNovac;
            std::cin.ignore(3, '\n');
            return in;
            }
        };

#endif
