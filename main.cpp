#include <iostream>

using namespace std;

// int main() {
//     int file_size; // Snake Case
//     int FileSize; // Pascal Case (Classes)
//     int fileSize; // Camel Case
//     int iFileSize; // Hungarian Notation
//     return 0;
// }

// int main() {
//     int x = 10;
//     // int y = x++; // x = 11, y = 10
//     // int z = x % y; // Remainder operator
//     int z1 = ++x; // x = 11, z1 = 11
//     std::cout << z1;
//     return 0;
// }

// int main() {
//     double x = 1 + 2 * 3;
//     std::cout << x;
//     return 0;
// }

// int main() {
//     const double pi = 3.14;
//     pi = 0; // const cannot change assignment
//     return 0;
// }

int main() {
    double sales = 95000;
    const double tax_rate_state = 0.04;
    const double tax_rate_county = 0.02;
    double tax_state = sales * tax_rate_state;
    double tax_county = sales * tax_rate_county;
    double tax_total = sales * (tax_rate_county + tax_rate_state);

    cout << "sales: $" << sales << endl
         << "state taxes: $" << tax_state << endl
         << "county taxes: $" << tax_county << endl
         << "total taxes: $" << tax_total;

    // cout << "x = " << x << endl
    //      << "y = " << y;
    return 0;
}