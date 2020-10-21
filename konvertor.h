#ifndef CURRENCY_H
#define CURRENCY_H
#include <map>

class konvertor {
private:
    std::map<std::string, double> valuta;
    std::map<std::string, std::string> symbol;
public:
    Converter();
    std::string getSymbol(std::string valuta);
    long pretvoriValutu(std::string c1, std::string c2, long iznos);
};
#endif
