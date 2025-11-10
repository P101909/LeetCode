class Solution {
public:
    string addBinary(string a, string b) {
        // First detemrine the size of both numbers
        int x = a.length();
        int y = b.length();
        string result;

        // Have a helper functions for adding three numbers in binary
        // Always check for carry over

        // Go until one gives away
        int i = 1;
        int j = 1;
        char carry = '0';
        while (i <= x && j <= y) {
            result = add(a[x - i], b[y - j], carry) + result;
            //Determine the carry
            if (a[x - i] == '1' && b[y - j] == '1')
                carry = '1';
            else if (a[x - i] == '1' && carry == '1')
                carry = '1';
            else if (b[y - j] == '1' && carry == '1')
                carry = '1'; 
            else 
                carry = '0';
            i++; j++;
        }

        // If one of them was had more bits than the other
        while ( i <= x) {
            if (carry == '1') {
                result = add(a[x - i], '0', carry) + result;
            //Determine the carry
            if (a[x - i] == '1' && carry == '1')
                carry = '1';
            else 
                carry = '0';
            }
            else
                result = a[x - i] + result;
            i++;
        }

        while ( j <= y) {
            if (carry == '1') {
                result = add('0', b[y - j], carry) + result;
            if (b[y - j] == '1' && carry == '1')
                carry = '1';
            else 
                carry = '0';
            }
            else
                result = b[y - j] + result;
            j++;
        }
        
        // If there is still a carry
        if (carry == '1')
            result = "1" + result;

        return result;
    }

    string add(char a, char b, char c) {
        // c will be the carry over when we call this function
        // retunr the result not considering the carryover
    cout << a << " " << b << " "<<c<<endl;
        if (a == '0' && b == '0' && c == '0')
            return "0";
        else if (a == '1' && b == '1' && c == '0')
            return "0";
        else if (a == '0' && b == '1' && c == '1')
            return "0";
        else if (a == '1' && b == '0' && c == '1')
            return "0";
        else 
            return "1";
    }
};