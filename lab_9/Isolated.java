public class Isolated {
    public static void main(String[] args) {
        int totalNodes = 5;
        int arr[][] = {{0,2},{2,2},{3,4},{0,4}};
        int[][] adjMetrix = new int[5][5];
        int zeroFlag = 0;

        for(int i = 0;i < totalNodes -1;i++){
            
            adjMetrix[arr[i][0]][arr[i][1]] = 1;
            adjMetrix[arr[i][1]][arr[i][0]] = 1;
        }

        for(int i = 0;i < totalNodes;i++){
           for(int j = 0;j < totalNodes;j++){
            if(adjMetrix[i][j] == 1){
                zeroFlag  = 1;
                break;
            }
           }
           if(zeroFlag == 0) System.err.println("Isolated vertices = " +i);
           zeroFlag = 0;
        }
    }
}
