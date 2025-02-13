// In your main test file, e.g., `test.cpp`
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>  
#include "movie.h"           
#include "movie_factory.h" 
#include <iostream>  
#include <sstream>


TEST_CASE("Movie Constructor and Getter Methods") {
    Movie movie("Inception", "Christopher Nolan", 148, 1, 8.8);

    SECTION("Movie title should be 'Inception'") {
        REQUIRE(movie.GetTitle() == "Inception");
    }

    SECTION("Movie director should be 'Christopher Nolan'") {
        REQUIRE(movie.GetDirector() == "Christopher Nolan");
    }

    SECTION("Movie runtime should be 148 minutes") {
        REQUIRE(movie.GetRuntime() == 148);
    }

    SECTION("Movie rating should be 8.8") {
        REQUIRE(movie.GetRating() == 8.8);
    }
}

TEST_CASE("Movie Constructor with Invalid Values") {
    SECTION("Negative runtime should throw exception") {
        REQUIRE_THROWS_AS(Movie("Inception", "Christopher Nolan", -148, 1, 8.8), std::invalid_argument);
    }

    SECTION("Rating below 0 should throw exception") {
        REQUIRE_THROWS_AS(Movie("Inception", "Christopher Nolan", 148, 1, -1.0), std::invalid_argument);
    }

    SECTION("Rating above 10 should throw exception") {
        REQUIRE_THROWS_AS(Movie("Inception", "Christopher Nolan", 148, 1, 11.0), std::invalid_argument);
    }

    SECTION("Empty title should throw exception") {
        REQUIRE_THROWS_AS(Movie("", "Christopher Nolan", 148, 1, 8.8), std::invalid_argument);
    }

    SECTION("Empty director should throw exception") {
        REQUIRE_THROWS_AS(Movie("Inception", "", 148, 1, 8.8), std::invalid_argument);
    }
}

TEST_CASE("Movie Getter and Setter Methods") {
    Movie movie("The Dark Knight", "Christopher Nolan", 152, 2, 9.0);

    SECTION("Movie title should be 'The Dark Knight'") {
        REQUIRE(movie.GetTitle() == "The Dark Knight");
    }

    SECTION("Movie director should be 'Christopher Nolan'") {
        REQUIRE(movie.GetDirector() == "Christopher Nolan");
    }

    SECTION("Movie runtime should be 152 minutes") {
        REQUIRE(movie.GetRuntime() == 152);
    }

    SECTION("Movie rating should be 9.0") {
        REQUIRE(movie.GetRating() == 9.0);
    }
}

TEST_CASE("Edge Case: Minimum Runtime and Rating") {
    SECTION("Zero runtime should be allowed") {
        Movie movie("Short Film", "Director", 0, 4, 7.5);
        REQUIRE(movie.GetRuntime() == 0);
    }

    SECTION("Zero rating should be allowed") {
        Movie movie("Movie With No Rating", "Director", 100, 5, 0.0);
        REQUIRE(movie.GetRating() == 0.0);
    }

    SECTION("Zero rating should work") {
        Movie movie("Unrated Movie", "Director", 120, 6, 0.0);
        REQUIRE(movie.GetRating() == 0.0);
    }

    SECTION("Maximum rating of 10 should be allowed") {
        Movie movie("Top Rated Movie", "Director", 120, 7, 10.0);
        REQUIRE(movie.GetRating() == 10.0);
    }
}