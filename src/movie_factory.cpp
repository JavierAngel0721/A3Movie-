//movie_factory.cpp
 /*
 Write function definition CreateMovies() that 
 accepts (attributes in the below order)
   vector of titles, 
   vector of directors, 
   vector of runtimes, 
   vector of ids, 
   vector of ratings and 
 return 
   vector of pointers of Movie objects
 */
#include <stdexcept>
#include <vector>
#include <string>
#include "movie_factory.h"

using namespace std;

//Function Definition for CreateMovies
vector<Movie*> CreateMovies(
  const vector<string>& titles, 
  const vector<string>& directors, 
  const vector<int>& runtimes,
  const vector<int>& id,
  const vector<double>& rating){
  //Vector for the pointers
  vector<Movie*> movies; 

  size_t size = titles.size();

  if (directors.size() != size || runtimes.size() != size || id.size() != size || rating.size() != size) {
    throw std::invalid_argument("Input vectors must have the same length");
  }

  // Loop through the vectors and create Movie objects
  for (size_t i = 0; i < size; ++i) {
    Movie* newMovie = new Movie(titles[i], directors[i], runtimes[i], id[i], rating[i]);
    movies.push_back(newMovie);  
  }

  return movies;  

};