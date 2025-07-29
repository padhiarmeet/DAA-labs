public class Adj_metrix {
    public static void main(String[] args) {
        int totalNodes = 5;
        int arr[][] = {{0,1},{1,2},{3,4},{0,4}};
        int[][] adjMetrix = new int[5][5];

        for(int i = 0;i < totalNodes -1;i++){
            
            adjMetrix[arr[i][0]][arr[i][1]] = 1;
            adjMetrix[arr[i][1]][arr[i][0]] = 1;
        }

        for(int i = 0;i < totalNodes;i++){
           for(int j = 0;j < totalNodes;j++){
            System.out.print(adjMetrix[i][j] + " ");
           }
           System.out.println();
        }
    }
}
