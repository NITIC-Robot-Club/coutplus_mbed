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
- coutplus
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
- initCout
    - mbed os 6でcoutを使うために必要な処理をすべてつめこんだ
    - initCout(intの表示桁数,flotの表示桁数)
    - `initCout(4,3)`のように使う
    - main関数の最初に入れる
- setPosition
    - カーソルを移動する。
    - 計算が大変なのでcoutplusを使うことをお勧めする。
    - 1,1が左端
- 