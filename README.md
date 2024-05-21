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

# サンプル
