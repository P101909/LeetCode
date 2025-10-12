class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        // Find the size of the pic
        int m = image.size();    // Number of rows
        int n = image[0].size(); // Number of coloums

        // Store the original color:
        int OgColor = image[sr][sc];

        // Keep calling the funcion on each
        if (color == OgColor)
            return image;
        ContinueColoring(image, m, n, sr, sc, color, OgColor);
        return image;
    };
    void ContinueColoring(vector<vector<int>>& image, int m, int n, int i,
                          int j, int color, int OgColor) {
        // Base case
        if (image[i][j] != OgColor)
            return;

        // Recursive Case:
        
        // Depth First Search
        // Color the pixel if matches the og pixel color
        image[i][j] = color;
        // Go through all posible enighoburs of the pixel
        if ((i - 1 >= 0) && ((i - 1) < m))
            ContinueColoring(image, m, n, (i - 1), j, color, OgColor);
        if ((i + 1 >= 0) && ((i + 1) < m))
            ContinueColoring(image, m, n, (i + 1), j, color, OgColor);
        if ((j - 1 >= 0) && ((j - 1) < n))
            ContinueColoring(image, m, n, i, (j - 1), color, OgColor);
        if ((j + 1 >= 0) && ((j + 1) < n))
            ContinueColoring(image, m, n, i, (j + 1), color, OgColor);
    };
};
