# Vector

- Vector is better than array. In modern C++, rarely use raw arrays. Instead, people use vectors.
- Vector is a dynamic array.
- Vector is a container in the **C++ Standard Template Library**.
- Creating vectors is creating C++ objects.
- Vectors can grow and shrink in size at execution time.

Declaring vectors

```
#include <vector>
using namespace std;

vector <char> vowels;
vector <int> test_scores;

vector <char> vowels (5); // Size 5
vector <int> test_scores (10); // Size 10, initialized to zero
```

Initializing

Elements initialized to zero unless specified.

```
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

vector <int> test_scores {100, 98, 80};

vector <double> temperatures (365, 80.0); // With parenthesis, 1st value is size, 2nd value is initialized value for all the elements.
```

Accessing vector elements

`vector_name.at(element_index)` (Vector syntax)

`vector_name[element_index]` (array syntax)

Grow vector as needed. Vector will automatically allocate the required space.

`vector_name.push_back(element)`

Get the length of the vector

`vector_name.size()`

2 dimensional vector

```
vector <vector<int>> movie_ratings
{
    {1, 2, 3, 4},
    {1, 3, 4, 5},
    {1, 2, 2, 5}  
};

movie_ratings[0][0]
movie_ratings.at(0).at(0)
```

