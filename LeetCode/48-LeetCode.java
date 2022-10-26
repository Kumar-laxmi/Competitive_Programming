// 48. Rotate Image
// Difficulty: Medium

class Solution {
    public int[][] transpose(int[][] matrix, int n) {
        int[][] result = new int[n][n];

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }

    public int[][] inverse(int[][] matrix, int n) {
        int[][] result = new int[n][n];

        for(int j=0; j<n; j++) {
            for(int i=0; i<n; i++) {
                result[i][n-j-1] = matrix[i][j];
            }
        }

        return result;
    }

    public void rotate(int[][] matrix) {
        int n = matrix.length;

        int[][] result = inverse(transpose(matrix, n), n).clone();
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                matrix[i][j] = result[i][j];
            }
        }
    }
}
