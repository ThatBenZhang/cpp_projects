#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
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

// int main() {
//     double sales = 95000;
//     const double tax_rate_state = 0.04;
//     const double tax_rate_county = 0.02;
//     double tax_state = sales * tax_rate_state;
//     double tax_county = sales * tax_rate_county;
//     double tax_total = sales * (tax_rate_county + tax_rate_state);

//     cout << "sales: $" << sales << endl
//          << "state taxes: $" << tax_state << endl
//          << "county taxes: $" << tax_county << endl
//          << "total taxes: $" << tax_total;

//     return 0;
// }

// addition calcuator

// int main() {
//     cout << "Enter values for x and y: ";
//     double x;
//     double y;
//     cin >> x >> y;
//     cout << x + y;
//     return 0;
// }

// F to C

// int main() {
//     cout << "Enter temperature in fahrenheit: ";
//     int temp_f;
//     cin >> temp_f;
//     double temp_c = (temp_f - 32) * (5.0 / 9.0); // 5/9 is evaluated as 0 haha cpp
//     cout << "Equivalent to: " << temp_c << " degrees celsius.";
//     return 0;
// }

// area of a circle

// int main() {
//     cout << "Enter radius: ";
//     double radius;
//     cin >> radius;
//     const double pi = 3.14;
//     double area = pi * pow(radius, 2.0);
//     cout << "The area of your circle is: " << area;
//     return 0;
// }

// block comment syntax

// int main() {
//     // ...
//     /*
//     comment block
//     */
//     return 0;
// }

/* FUNDAMENTAL DATA TYPES
short 2 bytes
int 4 bytes
long 4 bytes (usually same as int most machines)
long long 8 bytes

float 4 bytes (rounding could be limiting)
double 8 bytes
long double 8 bytes

bool 1 byte (T/F)
char 1 byte (single characters)
*/

// int main() {
//     // auto (assigns variable type, careful with float and long, defaults to int and double)
//     double price = 99.99;
//     float interest_rate = 3.67F;
//     long file_size = 90000L;
//     char letter = 'a';
//     bool is_valid = false;
//     return 0;
// }

// bracket initialization

// int main() {
//     int number {};
//     cout << number;
//     return 0;
// }

// stay away from unsigned keyword

// int main() {
//     unsigned int number {};
//     number--;
//     cout << number;
//     return 0;
// }

// casting data into smaller memory space than it needs

// int main() {
//     int number = 1000000;
//     short another {number};
//     cout << another;
//     return 0;
// }

// random number generator, seeding, capping rand number with mod 10

// int main() {
//     long elapsed_seconds = time(nullptr); // Jan 1 1970
//     srand(elapsed_seconds);
//     // srand(time(nullptr)); //also works
//     int number = rand() % 10;
//     cout << number;
//     return 0;
// }

// die roll num generator (2 dice)

// int main() {
//     const short min_value = 1;
//     const short max_value = 6;

//     srand(time(nullptr));
//     short dice_first = (rand() % (max_value - min_value + 1)) + min_value;
//     short dice_second = (rand() % (max_value - min_value + 1)) + min_value;

//     cout << dice_first << ", " << dice_second;
//     return 0;
// }