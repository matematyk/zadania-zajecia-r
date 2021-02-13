#Zadanie_1:
#  1) Stworz funkcje (nie wykorzystujac petli) przyjmujaca jako argument wejsciowy obiekt "x" oraz:
funkcja <- function(x)
{
  if (is.matrix(x)){
    n <- dim(x)[2]
    colnames(x) <- paste("x",1:n,sep="_")
    y <- apply(x, MARGIN = 2, FUN=sum)
  } 
  if (is.vector(x)){
    n = length(x)
    names(x) <- paste("x",1:n,sep="_")
    y <- sum(x)
  }
  
  wynik <- list("wejscie" = x, "wyjscie" = y)
  return(wynik)
}  
#  a) nadajaca nazwy kolumnom (dla tablic) lub elementom (dla wektorow), poczawszy od "x_1" az do "x_n" ("n" jest liczba kolumn lub dlugoscia wektora),
#b) wyznaczacjaca sume elementow w kazdej kolumnie (dla tablic) lub sume elementow wektora,
#c) zwracajaca obiekt wejsciowy oraz obiekt stworzony w punkcie b)

#2) Przetestuj dzialenie funkcji dla:
#  a) macierzy rozmiaru "20x20" o nazwie "macierz" (ziarno = 666),
set.seed(666)
m <- 20
vector1 <- runif(m*m)
macierz1 <- matrix(vector1,nrow = m, ncol = m)
macierz1
a<- funkcja(macierz1)
a
a["wyjscie"]
#b) wektora dlugosci "100" o nazwie "wektor" (ziarno = 666)
#wypelnionych wartosciami losowymi z rozkladu rownomiernego.
set.seed(666)
m2 <- 100
vector2 <- runif(m2)
funkcja(vector2)

