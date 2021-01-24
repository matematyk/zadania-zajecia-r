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
//a) Napisz wlasna funkcje rownowazna wbudowanej funkcji "matrix". Zobacz kod zrodlowy "matrix".
std::vector<std::vector<long long unsigned int>> matrixx(std::vector<long long unsigned int> v, int kolumna, int wiersz){
  int indeks= 0;
  std::vector<std::vector<long long unsigned int>> w = {};
  
  for (int i=0; i < kolumna; i++) {
    std::vector<long long unsigned int> r = {};
    for (int j=0; j < wiersz; j++) {
      r.push_back(v[indeks]); 
      indeks += 1;
    }
    w.push_back(r);
    
  }
  return w;
  
}

// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
matrixx(c(1:4),2,2)
*/
