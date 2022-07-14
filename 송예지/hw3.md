# Vim
<br/>

![vim_mode](https://github.com/YYYEJI/GBC33_ProgrammerBase/blob/master/송예지/img/vim_mode.png?raw=true)

### 1.  Insert mode
- [ESC] 클릭 후 일반모드로 전환하여 사용
- **i**(lowercase) ⇒  현재 커서 앞에서 편집 시작
- **a** ⇒ 현재 커서 다음부터 편집 시작
- **A** ⇒ 현재 커서 줄의 맨 끝으로 이동하고 편집
- **o** ⇒ 현재 커서 아래 새로운 줄 추가하여 편집
- **O** ⇒ 현재 커서 위 새로운 줄을 추가하고 편집
- 원소 삭제 → 일반 모드에서 x를 누르면 커서 위치의 원소 삭제 가능

<br/>


### 2. Visual mode
- ESC] 클릭 후 일반모드로 전환하여 사용
- **v**(lowercase) ⇒ 현재 커서 위치에서부터 문자 단위로 선택 가능
- **V**(uppercase) ⇒ 현재 커서 위치에서부터 라인 단위로 선택 가능
- **Ctrl + v** ⇒ 현재 커서를 기준으로 블록 선택 가능
- **p**(lowercase) ⇒ 복사된 데이터를 현재 위치에 붙여넣기
- **P**(uppercase) ⇒ 복사된 데이터를 마지막 라인에 붙여넣기

<br/>

###  3. Command Mode
- [ESC] 클릭 후 일반모드로 전환하여 사용
- 여러 파일을 열기
    - **:vs filename** ⇒ 수직으로 창 나누고 읽어옴
    - **:split filename** ⇒ 수평 창 나누고 읽어옴
    - **Ctrl + ww** ⇒ 다른 창으로 이동
- 외부 명령어 실행하기
    - **:! command[enter]** 
        
            ⇒ 쉘 명령어 실행 후 Vim 복귀
            ⇒ 현재 작업하고자 하는 파일의 이름을 알고자 할 때 잠깐 나가서 ls를 실행하고 싶을 때 쓰는 명령어
            ⇒ ex) :! ls

<br/>

### 4. Save
- [ESC] 클릭 후 일반모드로 전환하여 사용
- **:wq!** ⇒  save + quit
- **ZZ** ⇒ save + quit
- **:q!** ⇒ quit
- **:w newfile** ⇒ newfile이라는 이름으로 저장(다른 이름으로 저장)



<br/>

### 5. Copy / Paste
- [ESC] 클릭 후 일반모드로 전환하여 사용
- **yy** ⇒ 현재 라인 복사
- **3yy** ⇒ 현재 커서에서 3라인 복사
- **p**(lowercase) ⇒ 현재 커서 아래 붙여넣기
- **P**(uppercase) ⇒ 현재 커서 위에 붙여넣기

<br/>

### 6. Delete / Undo / Redo
- **x** ⇒ 현재 커서 위치에 있는 한 글자 지우기
- **dw** ⇒ 현재 커서에 있는 한 단어 지우기
- **dd** ⇒ 현재 라인 지우기
- **3dd** ⇒ 현재 커서부터 3라인 지우기
- **u**(lowercase) ⇒ 마지막 명령어 취소
- **U**(uppercase) ⇒ 해당 줄 전체의 수정사항 취소
- **Ctrl + r** ⇒ redo 기능

<br/>

### 7. Replace / Move
- [ESC] 클릭 후 일반모드로 전환하여 사용
- **r** ⇒ 한 글자 수정하기
- **cw** ⇒ 현재 커서에 있는 단어를 변경할 때 사용(삭제후 입력)
- **c$** ⇒ 해당 줄 전체를 변경할 때 사용 (삭제 후 입력)
- **E** ⇒ 현재 라인의 끝으로 이동 ($도 동일)
- **G** ⇒ 파일의 끝으로 이동
- **gg** ⇒ 파일의 처음으로 이동
- **3G** ⇒ 3번째 라인으로 이동

<br/>

### 8. Find / Search / Replace
- [ESC] 클릭 후 일반모드로 전환하여 사용
- **/keyword** ⇒ 원하는 keyword 검색
- **?keyword** ⇒ 원하는 keyword를 역방향으로 검색
- **n(lowercase)** ⇒ 검색 결과에서 다음 문자열 찾기
- **N(uppercase)** ⇒ 검색 결과에서 이전 문자열 찾기
- **:%s/old/new/g** ⇒ 찾는 단어를 새 단어로 파일에서 전체 (globally) 변경
- **:%s/old/new/gc** ⇒ 사용자에게 물으며 변경
- **%s/old/new/i** ⇒ 대소문자 구분 없이 검색
- **:#,#s/old/new/g** ⇒ 줄 번호(#) 사이의 찾는 단어를 새 단어로 모두 변경


