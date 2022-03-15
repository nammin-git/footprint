package com.mgprogect.movielist

data class MovieClass(
    var poster: Int,
    val movieName: String,
    val grade: String)

val movie1 = MovieClass(R.drawable.the_truman_poster, "The Truman Show", "PG 12")
val movie2 = MovieClass(R.drawable.the_silence_poster, "The Silence Of The Lambs", "X-rated")
val movie3 = MovieClass(R.drawable.lala_land_poster, "LaLaLand", "PG 12")


