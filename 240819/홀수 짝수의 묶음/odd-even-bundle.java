import java.util.Scanner;

public class Main {
    public static int n, pair;
    public static boolean find, odd;
    public static int[] arr = new int[1000];
    public static int ans = 0;

    public static void back(int index, int p, boolean is_odd){

        //각 묶음의 속한 수들의 총합을 담을 변수
        int sum = 0;

        for (int i = index; i<n; i++){
            if(find) {
                // 답을 찾아냈음으로 재귀호출 된 함수들에서 필요없는 반복문을 돌리지 않도록 모두 탈출해줍니다.
                return;
            }
            
            //홀수를 만들어야하는 차례인데 index변수로 시작해서 현재까지 수들의 합이 최초로 홀수입니다.
            if(is_odd && sum %2 !=0)
                //묶음의 조건에 부합했음으로 다음 묶음을 만들기 위해 재귀 호출 합니다. 
                // 다음 탐색 순서인 인덱스 값 i, 현재 묶음수에 1을더한 값, 다음 묶음은 짝수 차례임을 알리기 위해 is_odd를 반전시켜 전달합니다.
                back(i, p+1, !is_odd);

            // 짝수 차례
            else if (!is_odd && sum%2 == 0 && i !=index)

                back(i,  p+1, !is_odd);


            // 탐색 중인 구간의 원소들을 차례로 더해갑니다. 그 합이 짝수 차례면 짝수가 될 때까지, 홀수 차례이면 홀수가 될 떄까지.
            sum += arr[i];
        }


        // if (!find)를 해주지 않는다면, 재귀를 빠져나오면서 최적이 아니지만 홀짝홀짝에는 부합하는 상황이 ans의 값을 바꿔버립니다. 
        // 그래서 최초 묶음을 다 완성한 경우의 p값만 ans에 넣고, back하는 과정의 함수들은 return으로 흘려 보내야합니다.
        if (!find){

            //마지막 묶음의 직전 묶음까지는 반복문 내에 로직을 통해 올바르게 홀짝을 지켜왔습니다. 이제 마지막 묶음이 짝홀짝홀 조건에 부합하는지 테스트합니다.
            //반복문은 종료됐지만 sum변수에 마지막 묶음의 합이 들어가 있고, is_odd에는 마지막 묶음이 홀이어야할지 짝이어야할지 정보를 가지고 있습니다.


            //마지막 묶음이 홀수 차례인데 합도 홀수
            if (is_odd && sum %2 != 0){

                //정답을 찾았고, 지금 까지 호출된 함수들의 불필요한 반복문을 막기 위해 find 변수를 이용
                find = true;

                //1씩 더해오다 마지막 묶음까지 온 p의 값이 정답에 해당하는 묶음-1의 수입니다.
                ans = p;
            }

            //짝수 상황
            else if (!is_odd && sum%2 == 0){
                find = true;
                ans = p;
            }
        }

        return;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        find = false; 

        //현재 묶음이 합이 홀수이어야 하는 경우인지 짝수이어야하는 경우인지를 구분지어주는 변수입니다
        odd = false;

        for (int i = 0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        //배열 탐색 시작점인 0, 현재까지의 묶음 수 0, 짝수로 시작하기 때문에 odd 변수에 false를 넣어서 재귀함수를 시작합니다
        back(0,0,odd);
        System.out.print(ans+1);
        
    }
}