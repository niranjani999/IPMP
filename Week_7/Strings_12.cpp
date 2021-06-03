class Solution {
  public:
    int* get(string string2) {
        int* c = (int*)calloc(sizeof(int), 256);
        for (int i = 0; i < string2.size(); i++) c[string2[i]]++;
        return c;
    }    
    string removeChars(string string1, string string2) {
        // code here
        int* c = get(string2);
        string res;
        int id = 0;
        while (id < string1.size()) {
            char temp = string1[id];
            if (c[temp] == 0) res.push_back(temp);
            id++;
        }
        return res;
    }
};
