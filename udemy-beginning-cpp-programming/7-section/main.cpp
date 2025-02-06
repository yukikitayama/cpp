#include <iostream>
#include <vector>

using namespace std;

int main() {
    // char vowels[] {'a', 'e', 'i', 'o', 'u'};
    // cout << "The first vowel is: " << vowels[0] << endl;
    // cout << "The last vowel is: " << vowels[4] << endl;
    // double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    // cout << "The first high temperature is: " << hi_temps[0] << endl;
    // hi_temps[0] = 100.7;
    // cout << "The first high temperature is: " << hi_temps[0] << endl;
    // int test_scores[3] {100};
    // cout << "First score: " << test_scores[0] << endl;
    // cout << "Second score: " << test_scores[1] << endl;
    // cout << "Third score: " << test_scores[2] << endl;
    // cout << "Enter 3 test scores" << endl;
    // cin >> test_scores[0] >> test_scores[1] >> test_scores[2];
    // cout << "First score: " << test_scores[0] << endl;
    // cout << "Second score: " << test_scores[1] << endl;
    // cout << "Third score: " << test_scores[2] << endl;
    // cout << "Value of the array name: " << test_scores << endl;

    // vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    // cout << vowels[0] << endl;
    // cout << vowels[4] << endl;
    // vector <int> test_scores {100, 98, 89};
    // cout << test_scores[0] << endl;
    // cout << test_scores[1] << endl;
    // cout << test_scores[2] << endl;
    // cout << test_scores.at(0) << endl;
    // cout << test_scores.size() << endl;
    // cout << "Enter 3 test scores" << endl;
    // cin >> test_scores.at(0);
    // cin >> test_scores.at(1);
    // cin >> test_scores.at(2);
    // cout << "Updated test scores" << endl;
    // cout << test_scores[0] << endl;
    // cout << test_scores[1] << endl;
    // cout << test_scores[2] << endl;
    // int score_to_add {0};
    // cout << "Enter one more test score" << endl;
    // cin >> score_to_add;
    // test_scores.push_back(score_to_add);
    // cout << test_scores.at(0) << endl;
    // cout << test_scores.at(1) << endl;
    // cout << test_scores.at(2) << endl;
    // cout << test_scores.at(3) << endl;
    // cout << test_scores.size() << endl;
    // vector<vector<int>> movie_ratings
    // {
    //     {1, 2},
    //     {1, 3}
    // };
    // cout << movie_ratings[0][0] << endl;
    // cout << movie_ratings[0][1] << endl;
    // cout << movie_ratings[1][0] << endl;
    // cout << movie_ratings[1][1] << endl;

    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector2: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    vector1.at(0) = 1000;
    cout << "Vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    return 0;
}