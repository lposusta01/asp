struct array_struct
{
  char words_arr[4][3]; 
};

struct array_struct arr;

array_struct encode(std::string input){

std::ifstream stream;
stream.open(input, std::ifstream::binary);

char * words = new char [3]; //3 * 8 = bit depth 24
//this 4 will need to be dynamically adjusted based on file size
//replace 3 with bit depth/8. right now this assumes bit depth 24

for(int i = 0; i < 4; i++) //adjust dynamically here also
{
    stream.read(words, 3);
    for(int j = 0; j < 3; j++){
    arr.words_arr[i][j] = words[j];
    }
}


return arr;

}