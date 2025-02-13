#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
    private:
    
      std::string title;
      std::string director;
      int runtime; // runtime in minutes >= 0
      int id;
      double rating; // range 0-10
    public:
      Movie(std::string t, std::string d, int r, int i, double rate);
      std::string GetTitle();
      std::string GetDirector();
      double GetRating();
      int GetRuntime();
    
      void PrintMovieData(); // to print details
  };

  #endif