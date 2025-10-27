class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Have two hash maps for both ransomNote and Magezine
        // Let the keys be letters and values the number of them in each string
        // Check to see if we we have enough in Magezine
        int size1, size2;
        size1 = ransomNote.length();
        size2 = magazine.length();

        map<char, int> Note;
        map<char, int> Mag;

        for (int i = 0; i < size1; i++) {
            Note[ransomNote[i]] += 1;
        } 
        for (int i = 0; i < size2; i++) {
            Mag[magazine[i]] += 1;
        }
        for (int i = 0; i < size1; i++) {
            if (!( Mag[ransomNote[i]] >= Note[ransomNote[i]]) )
                return false;
        }    
        return true; 
    }
};