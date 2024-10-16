#include <iostream>
using namespace std;

int main () {
    
    double sales = 95000 ;
    cout << "Sales = $ " << sales << endl;
    
    double StateTaxRate = .04;
    double stateTax = sales * StateTaxRate ;
    cout << "State Tax = $ " << stateTax << endl;
    
    double CountyTaxRate = .02;
    double countyTax = sales * CountyTaxRate ;
    cout << "County Tax = $ " << countyTax << endl;
    
    return 0 ;
    

}

