# 🧠📡 WSB — WiFi Scanner Brainfuck

WSB (**WiFi Scanner Brainfuck**) adalah project eksperimental dan edukatif yang
menggabungkan **WiFi scanning di Windows & Linux** dengan bahasa esoterik
**Brainfuck** sebagai *frontend parser*.

> ⚠️ Project ini **BUKAN alat hacking**  
> Dibuat untuk **edukasi**

---

## ✨ Fitur

- ✅ Scan WiFi di **Windows** & **Linux**
- 🧠 Parsing output menggunakan **Brainfuck**
- 🔁 Mendukung pipe / stdin streaming
- 💻 CLI ringan & sederhana
- 🧪 Cocok untuk:
  - Edukasi networking
  - Demo Brainfuck
  - Eksperimen sistem & bahasa ekstrem

---

## 🖥️ Platform Support

| OS       | Status |
|---------|--------|
| Windows | ✅ |
| Linux  | ✅ |
| macOS  | ❌ (belum diuji) |

---


## 🚀 Cara Pakai Windows
netsh wlan show networks mode=bssid | brainfuck brainfuck/wifi_scanner.bf

## 🐧 Linux
nmcli dev wifi list | bf /wifi_scanner.bf
<br>
gcc /wifi_core.c -o wifi
<br>
./wifi | bf brainfuck/ssid_only.bf

## Author 
Mr.Rm19 - ramdan19id@gmail.com
