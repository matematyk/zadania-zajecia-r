#include <Rcpp.h>
using namespace Rcpp;
#include <vector>
// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
int timesTwo(int x) {
  return x * 2;
}
std::vector<long long unsigned int> cumsum(std::vector<long long unsigned int> v){
  std::vector<long long unsigned int> wynik = {};
  wynik.push_back(v[0]);
  for (long long unsigned int i = 1; i < v.size(); i++ ) {
    wynik.push_back(wynik[i-1] + v[i]);
  }
  return wynik;
}

//a) Napisz wlasna funkcje "cumsum" (zwracajaca wektor, ktorego elementami sa sumy skumulowane).
///b) Porownaj jej dzialanie z wbudowana funkcja "cumsum"



// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
cumsum(c(1:10))
*/
