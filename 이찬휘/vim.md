vim 플러그인 설치



1. vundle 플러그인 설치

git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim

vi ~/.vimrc


:PluginInstall  --> 플러그인 설치된다.


사용법



\nt를 입력하면 파일트리가 나타난다.



ctrl + w , w (파일트리 <--> 에디터 ) 서로 포커스가 이동된다.



:sp "파일이름" 으로 창을 분할한 경우



ctrl + w , ctrl + h,j,k,l로 분할된 창을 이동 할 수 있다.



#세션 생성

tmux



#이름을 지정하여 세션 생성

tmux new -s <session_name>

tmux new-session -s <session_name>



#세션 이름 수정

[ctrl] + b , $



[ctrl] + b ,d



tmux ls



tmux attach -t <session number 혹은 session name>





윈도우 생성

[ctrl] + b ,c



세션 생성과 함께 윈도우 생성

tmux new -s -n



윈도우 이름 변경

[ctrl] + b , ,



윈도우 종료

[ctrl] + b , &

[ctrl] + d



다음 윈도우로 이동

[ctrl] + b , n



이전 윈도우로 이동

[ctrl] + b , l



특정 윈도우로 이동

[ctrl] + b , 0 ~ 9



윈도우 리스트 보기

[ctrl] + b ,w



세로 화면 분할

[ctrl] + b , %



가로 화면 분할

[ctrl] + b , "
