import java.util.*;

public class MyGrid {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      String[] dimensions = in.nextLine().split(" ");
      int rows = Integer.parseInt(dimensions[0]);
      int cols = Integer.parseInt(dimensions[1]);

      int[][] grid = new int[rows][cols];

      //these nested for loops will turn the input into a int[][]
      for (int i = 0; i < rows; i++) {
         String curRow = in.nextLine();
         for (int j = 0; j < cols; j++) {
            grid[i][j] = curRow.charAt(j) - '0';
         }
      }
      
      int moves = bfs(grid, rows, cols);
      System.out.println(moves);
   }

   static int bfs(int[][] grid, int rows, int cols) {
      boolean[][] visited = new boolean[rows][cols];
      Queue<int[]> q = new LinkedList<int[]>();

      visited[0][0] = true;
      q.add(new int[]{0, 0, 0});
      
      while (!q.isEmpty()){

         int[] positionInfo = q.poll();

         int row = positionInfo[0];
         int col = positionInfo[1];
         int moves = positionInfo[2];
         int value = grid[row][col];

         //this returns moves once the bottom right corner is reached
         if (row == (rows - 1) && col == (cols - 1)) {
            return moves;
         }

         if(row + value < rows && !visited[row + value][col]) {
            q.add(new int[]{row + value, col, moves + 1});
            visited[row + value][col] = true;
         }

         if(row - value >= 0 && !visited[row - value][col]) {
            q.add(new int[]{row - value, col, moves + 1});
            visited[row - value][col] = true;
         }

         if(col - value >= 0 && !visited[row][col - value]) {
            q.add(new int[]{row, col - value, moves + 1});
            visited[row][col - value] = true;
         }

         if(col + value < cols && !visited[row][col + value]) {
            q.add(new int[]{row, col + value, moves + 1});
            visited[row][col + value] = true;
         }
      }

      return -1;
   }
}