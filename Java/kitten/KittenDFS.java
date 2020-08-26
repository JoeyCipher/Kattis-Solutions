import java.util.*;

public class KittenDFS {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int curr = Integer.parseInt(scan.nextLine());
		int[] branches = new int[101];

		String line = scan.nextLine();
		while (!line.equals("-1")) {
			String[] connections = line.split(" ");
			int lower = Integer.parseInt(connections[0]);

			// why is this loop changing branches[]?
			// what is that acheiving?
			for (int x = 1; x < connections.length; x++) {
				branches[Integer.parseInt(connections[x])] = lower;
			}

			line = scan.nextLine();
		}

		String path = String.format("%s ", curr);
		// why are we using curr for the index of branches?
		// and why can it not equal 0?
		while (branches[curr] != 0) {
			// why are we changing the value of curr?
			curr = branches[curr];
			// why are we adding this to the path?
			path += String.format("%s ", curr);
		}

		System.out.println(path.trim());
	}
}