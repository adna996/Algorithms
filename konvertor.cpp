#include <iostream>
#include "konvertor.h"

konvertor::konvertor(){
    currency["usd-gbp"] = 0.6392;
    currency["usd-cad"] = 1.0478;
    currency["usd-eur"] = 0.7494;
    currency["usd-jpy"] = 97.821;
    currency["usd-aud"] = 1.1151;
    currency["usd-chf"] = 0.9232;
    symbol["usd"] = "$";

    currency["gbp-usd"] = 1.5646;
    currency["gbp-cad"] = 1.6393;
    currency["gbp-eur"] = 1.1726;
    currency["gbp-jpy"] = 153.0483;
    currency["gbp-aud"] = 1.7447;
    currency["gbp-chf"] = 1.4443;
    symbol["gbp"] = "£";

    currency["aud-usd"] = 0.8968;
    currency["aud-gbp"] = 0.5732;
    currency["aud-cad"] = 0.9396;
    currency["aud-eur"] = 0.6721;
    currency["aud-jpy"] = 87.7225;
    currency["aud-chf"] = 0.8278;
    symbol["aud"] = "$";

    currency["cad-usd"] = 0.9544;
    currency["cad-gbp"] = 0.61;
    currency["cad-aud"] = 1.4879;
    currency["cad-eur"] = 0.7153;
    currency["cad-jpy"] = 93.3629;
    currency["cad-chf"] = 0.8811;
    symbol["cad"] = "C$";

    currency["eur-usd"] = 1.3343;
    currency["eur-gbp"] = 0.8528;
    currency["eur-aud"] = 1.4879;
    currency["eur-cad"] = 1.398;
    currency["eur-jpy"] = 130.526;
    currency["eur-chf"] = 1.2318;
    symbol["eur"] = "€";

    currency["jpy-usd"] = 0.0102;
    currency["jpy-gbp"] = 0.0065;
    currency["jpy-aud"] = 0.0114;
    currency["jpy-cad"] = 0.0107;
    currency["jpy-eur"] = 0.0077;
    currency["jpy-chf"] = 0.0094;
    symbol["jpy"] = "¥";

    currency["chf-usd"] = 0.0065;
    currency["chf-gbp"] = 0.6924;
    currency["chf-aud"] = 1.2079;
    currency["chf-cad"] = 1.135;
    currency["chf-eur"] = 0.8118;
    currency["chf-jpy"] = 105.9644;
    symbol["chf"] = "CHF ";
}

    std::string konvertor::getSymbol(std::string valuta){
        return symbol[valuta];
    }

    long konvertor::pretvoriValutu(std::string c1, std::string c2, long iznos){
        std::string key = c1 + "-" + c2;
        for(int idx = 0; idx < valuta.size(); idx++){
            if(valuta.find(key) != valuta.end()){
                double konverzija = valuta[key];
                konverzija *= (double)iznos;
                return (long)konverzija;
            }
        }
    }
