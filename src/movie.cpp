#include <iostream>
#include <format>
#include "movie.h"

//Initializer 
Movie::Movie(std::string t, std::string d, int r, int i, double rate)
  : title{t}, director{d}, runtime{r}, id{i}, rating{rate}{
  if (director.empty() || title.empty()) {
    throw std::invalid_argument("Director name cannot be empty");
  }
  if(rating > 10 || rating < 0){
    throw std::invalid_argument("Rating must be between 0-10");
  }

  if(runtime < 0){
    throw std::invalid_argument("Runtime can't be negative");
  }
}


std::string Movie::GetTitle(){
  return title;
}

std::string Movie::GetDirector(){
  return director;
}

double Movie::GetRating(){
  return rating;
}

int Movie::GetRuntime(){
  return runtime;
}

void Movie::PrintMovieData(){
  std::cout << "            Movie Data          " << std::endl;
  std::cout << "Title: " << title << std::endl;
  std::cout << "Director: " << director << std::endl;
  std::cout << "Runtime: " << runtime << std::endl;
  std::cout << "Rating: " << rating << std::endl;
  std::cout << "ID: " << id << std::endl;
}

