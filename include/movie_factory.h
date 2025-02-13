//movie_factory.h
 /*
 Write function declaration CreateMovies() that 
 accepts (attributes in the below order)
   vector of titles, 
   vector of directors, 
   vector of runtimes, 
   vector of ids, 
   vector of ratings and 
 return 
   vector of pointers of Movie objects
 */

#ifndef MOVIE_FACTORY
#define MOVIE_FACTORY
#include <vector>
#include "movie.h"
#include <string>


using namespace std;

//Function Declaration for CreateMovies
vector<Movie*> CreateMovies(
  const vector<string>& titles, 
  const vector<string>& directors, 
  const vector<int>& runtimes,
  const vector<double>& rating, 
  const vector<int>& id);

#endif