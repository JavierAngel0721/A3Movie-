//main.cpp
#include <catch2/catch.hpp>

#include "Movie.h"
#include "movie_factory.h"
#include <iostream>
#include <vector>
#include <limits>

Movie* FindHighestRatedMovie(const std::vector<Movie*>& movies) {
  Movie* highest_rated = nullptr;
  double max_rating = std::numeric_limits<double>::lowest(); // Start with the lowest rating

  for (auto movie : movies) {
    if (movie->GetRating() > max_rating) {
      highest_rated = movie;
      max_rating = movie->GetRating();
    }
  }

  return highest_rated;
}

double CalculateAverageRuntime(const std::vector<Movie*>& movies) {
  int total_runtime = 0;
  for (auto movie : movies) {
    total_runtime += movie->GetRuntime();
  }
  return static_cast<double>(total_runtime) / movies.size();
}


int main() {
  // Vectors representing movie data
  std::vector<std::string> titles{"Goodfellas", "Psycho", "Saving Private Ryan", "Full Metal Jacket", "Interstellar"};

  std::vector<std::string> directors{"Martin Scorsese", "Alfred Hitchcock", "Steven Spielberg", "Stanley Kubrick", "Christopher Nolan"};

  std::vector<int> runtimes{140, 175, 150, 160, 140};
  std::vector<int> ids{1, 2, 3, 4, 5};
  std::vector<double> ratings{9.1, 10, 10, 8.8, 8.9};

  std::vector<Movie*> movies = CreateMovies(titles, directors, runtimes, ratings, ids);
  Movie* highest_rated = FindHighestRatedMovie(movies);
  double average_runtime = CalculateAverageRuntime(movies);

  // Print data of the highest rated movie
  std::cout << "Highest Rated Movie: " << highest_rated->GetTitle() << std::endl;
  std::cout << "Director: " << highest_rated->GetDirector() << std::endl;
  std::cout << "Rating: " << highest_rated->GetRating() << std::endl;
  std::cout << "Runtime: " << highest_rated->GetRuntime() << " minutes" << std::endl;

  // Print Average Runtime
  std::cout << "Average Runtime: " << average_runtime << " minutes" << std::endl;

  // Clean up Memory
  for (auto movie : movies) {
    delete movie;
  }

  return 0;
}