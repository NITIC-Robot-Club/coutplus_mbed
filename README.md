# coutplus_mbed
coutを拡張します

# できること
- 文字の色を変える
- 背景色を変える
- カーソルを移動させていろいろなところにcout
- floatやintの表示桁数を変更
- 面倒な設定いらずにcoutをmbedで！

# 初めに
1. mbed studioのLibrary タブを開きます。
2. このライブラリを追加します。
3. `mbed_app.json`を`main.cpp`と同じ階層になければ追加します
4. `mbed_app.json`を編集(追記)します。
```json
{
  "target_overrides": {
    "*": {
      "target.printf_lib": "std"
    }
  }
}
```
これで準備完了です。

# 関数一覧
- coutplus(int line=-1)
    - coutの強化版
    - `coutplus()>>"hello\n"`とやると、その行が消されてからhelloが出力される。
    - `coutplus(2)>>"world\n"`とやると、上から2行目にカーソルを移動し、行を消し、worldを出力する。
    ```cpp
    int line=1;
    for(int i=0;i<5;i++){
        coutplus(line++)<<"hello,\n";
        coutplus(line++)<<"world\n";
    }
    ```
- initCout(int i,int f)
    - mbed os 6でcoutを使うために必要な処理をすべてつめこんだ
    - initCout(intの表示桁数,flotの表示桁数)
    - `initCout(4,3)`のように使う
    - main関数の最初に入れる
- setPosition(int x,int y)
    - カーソルをx,yに移動する。
    - 計算が大変なのでcoutplusを使うことをお勧めする。
    - 1,1が左端
- setCharColor(int color)
    - 文字色を変更する
    - 引数はintだが、次に説明する色一覧でもいい
    - setCharColor(DEFAULT)をしないとずっと色が戻らない。
- setBackColor(int color)
    - 背景色を変更する。
    - setCharColorと同じ。


# 色一覧
| 色 | 数字 |
| -- | -- |
| BLACK   | 0 |
| RED     | 1 |
| GREEN   | 2 |
| YELLOW  | 3 |
| BLUE    | 4 |
| MAGENTA | 5 |
| CYAN    | 6 |
| WHITE   | 7 |
| DEFAULT | 9 |