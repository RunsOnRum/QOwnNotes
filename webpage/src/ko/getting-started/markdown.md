# 마크다운

이 마크다운 속임수는 QOwnNotes의 마크다운 구문에 대한 빠른 참조 및 설명을 제공하기 위한 것입니다.

## 머리글

제목을 사용하여 텍스트를 구성합니다.

```markdown
# H1
## H2
### H3
#### H4
##### H5
###### H6
```

::: 팁 **네비게이션 패널**은 제목의 구조를 보여줍니다. :::

또는 H1과 H2의 경우 밑줄이 있는 스타일:

```markdown
Alt-H1
======

Alt-H2
------
```

::: 팁 기본적으로 QOwnNotes는 **머리글 1** (h1)에서 **노트의 파일 이름**을 작성합니다. :::

## 강조

```markdown
강조, 별칭 기울임꼴로 *별표*를 사용합니다.

**애스터리스크**로 굵게 강조합니다.
```

[단축키](./shortcuts.md) <kbd>Ctrl + B</kbd>를 사용하여 텍스트를 굵게 표시하고 <kbd>Ctrl + I</kbd>을 사용하여 기울임꼴로 표시할 수 있습니다. :::

## 밑줄

*미리보기 설정*에서 밑줄 렌더링을 활성화하는 옵션 설정도 있습니다.

```markdown
_밑줄_
```

:::  팁 [단축키](./shortcuts.md) <kbd>Ctrl + U</kbd>를 사용하여 텍스트에 밑줄을 표시할 수 있습니다. :::

## 취소선

```markdown
~~취소선~~
```

::: 팁 [단축키](./shortcuts.md) <kbd>Alt + Shift + S</kbd>을 사용하여 텍스트를 삭제할 수 있습니다. :::

## 목록

목록을 만드는 방법은 여러 가지가 있습니다.

```markdown
1. 첫 번째 정렬된 목록 항목
2. 다른 항목
  * 정렬되지 않은 하위 목록입니다.
1. 실제 숫자는 중요하지 않습니다. 단지 숫자일 뿐입니다
  1. 정렬된 하위 목록 (미리보기가 아닌 편집기에서만 작동)
4. 그리고 다른 아이템입니다.

* 정렬되지 않은 목록은 별표를 사용할 수 있습니다
- 또는 마이너스
+ 또는 플러스
```

::: 팁 목록 끝에 있는 <kbd>Enter<0>을 누르면 새 목록 항목이 생성됩니다. :::</p>

<h2 spaces-before="0">
  링크
</h2>

<p spaces-before="0">
  링크를 쉽게 사용할 수 있는 두 가지 방법은 웹 페이지나 기타 노트를 가리킵니다. 이러한 링크는 여러 가지 방법으로 볼 수 있습니다.
</p>

<h3 spaces-before="0">
  External links
</h3>

<pre><code class="markdown">[I'm an inline-style link](https://www.google.com)

[I'm an inline-style link with title](https://www.google.com "Google's Homepage")

[You can use numbers for reference-style link definitions][1]

Plain URLs and URLs in angle brackets will automatically get turned into links in the preview. 
http://www.example.com 또는 &lt;http://www.example.com&gt;

[1]: https://www.qownnotes.org
</code></pre>

<h3 spaces-before="0">
  Internal links
</h3>

<pre><code class="markdown">[I link to the Journal.md note](Journal.md)

&lt;Journal.md&gt; works similarly.
</code></pre>

<p spaces-before="0">
  ::: 팁 <a href="./shortcuts.md">단축키</a> <kbd>Ctrl + L</kbd>을 사용하여 웹 페이지 또는 <strong x-id="1">기타 노트에 대한 링크를 만들 수 있습니다</strong>.
</p>

<p spaces-before="0">
  <kbd>Ctrl + Shift + X</kbd>를 사용하면 노트에 <strong x-id="1">첨부 파일을 삽입</strong>하는 데 도움이 되는 대화 상자가 나타납니다.
</p>

<p spaces-before="0">
  노트의 링크에서 커서를 편집하여 링크를 따라가는 동안 <kbd>Ctrl + Space</kbd>를 누를 수 있습니다. :::
</p>

<h3 spaces-before="0">
  Bookmarks
</h3>

<p spaces-before="0">
  <a href="./browser-extension.md">QOwnNotes Web Companion 브라우저 확장</a>에서 사용되는 북마크는 목록의 연결을 사용합니다.
</p>

<pre><code class="markdown">- [Webpage name](https://www.example.com) #tag1 #tag2 some description and tags
</code></pre>

<h2 spaces-before="0">
  이미지
</h2>

<p spaces-before="0">
  이미지를 QOwnNotes에 포함할 수 있습니다. 미리보기에 표시됩니다.
</p>

<pre><code class="markdown">![alt text](media/my-image.jpg)
</code></pre>

<p spaces-before="0">
  ::: 팁 <a href="./shortcuts.md">단축키</a> <kbd>Ctrl + Shift + I</kbd> 를 사용하여 노트에 이미지를 삽입할 수 있습니다. 이미지가 클립보드에 있을 수도 있으며 대화상자가 이미지를 감지하고 미리보기를 표시합니다.
</p>

<p spaces-before="0">
  <kbd>Ctrl + Shift + V</kbd>을 사용하여 클립보드의 이미지를 노트에 직접 붙여넣을 수도 있습니다. :::
</p>


<h2 spaces-before="0">
  인라인 코드 및 코드 블록
</h2>

<pre><code class="markdown">인라인 '코드' 주위에 '백틱'이 있습니다.
</code></pre>

<p spaces-before="0">
  ::: 팁 선택한 인라인 텍스트 또는 텍스트 바로 안쪽에서 <a href="./shortcuts.md">단축키</a> <kbd>Ctrl + Shift + C</kbd>를 사용하여 인라인 코드 블록을 만들 수 있습니다. :::
</p>

<p spaces-before="0">
  코드 블록은 세 개의 백 틱이 있는 선으로 울타리를 두르거나 네 개의 공백으로 들여씁니다.
</p>

<h3 spaces-before="0">
  4-Spaces fence
</h3>

<p spaces-before="0">
  코드 앞에 공백 4개를 추가하여 코드 블록으로 표시합니다.
</p>

<pre><code class="markdown">    s = "Code with space indent"
    print s
</code></pre>

<h3 spaces-before="0">
  Backtick fence
</h3>

<p spaces-before="0">
  세 개의 백틱을 사용하여 코드 블록을 만들 수도 있습니다.
</p>

<p spaces-before="0">
  ~~~markdown
</p>

<pre><code>Code goes here
Code goes here
</code></pre>

<pre><code>
::: tip
You can use the [shortcut](./shortcuts.md) &lt;kbd>Ctrl + Shift + C&lt;/kbd> on
multiple selected lines of text or in an empty line to create a code block. 
:::

### Backtick fence with code highlighting

There also is some syntax highlighting with code blocks in QOwnNotes.

~~~markdown
```bash
# I am a comment
cd Notes
</code></pre>

<pre><code>
Currently, supported languages (and code block identifiers) are:

* BASh scripting, `bash`
* C, `c`
* C++, `cpp`
* C++, `cxx`
* C++, `c++`
* C#, `c#`
* CMake, `cmake`
* C#, `csharp`
* CSS, `css`
* Go, `go`
* HTML, `html`
* INI, `ini`
* Java, `java`
* JavaScript, `javascript`
* JavaScript, `js`
* JSON, `json`
* Makefile, `make`
* PHP, `php`
* Python, `py`
* Python, `python`
* QML, `qml`
* Rust, `rust`
* Shell scripting, `sh`
* SQL, `sql`
* TypeScript, `ts`
* TypeScript, `typescript`
* V, `v`
* Vex, `vex`
* XML, `xml`
* YAML, `yml`
* YAML, `yaml`

## Tables

Tables aren't part of the core Markdown spec, but the QOwnNotes preview supports them. 

~~~markdown
Colons can be used to align columns.

| Tables        | Are           | Cool  |
| ------------- |:-------------:| -----:|
| col 3 is      | right-aligned | $1600 |
| col 2 is      | centered      |   $12 |
| zebra stripes | are neat      |    $1 |

There must be at least 3 dashes separating each header cell.

You can also use inline Markdown.

| Markdown | Less | Pretty |
| --- | --- | --- |
| *Still* | `renders` | **nicely** |
| 1 | 2 | 3 |
</code></pre>

<p spaces-before="0">
  ::: 팁 <kbd>Alt + Shift + T</kbd>을 눌러 표 작성에 도움이 되는 대화상자를 활성화합니다. 이 대화 상자에서 CSV 파일을 가져올 수도 있습니다.
</p>

<p spaces-before="0">
  마크다운 테이블 내부의 <kbd>Ctrl + Space</kbd>를 사용하여 자동으로 형식을 지정합니다. :::
</p>

<h2 spaces-before="0">
  블럭 따옴표
</h2>

<pre><code class="markdown">&gt; Blockquotes are very handy in email to emulate reply text.
&gt; This line is part of the same quote.

Quote break.

&gt; This is a very long line that will still be quoted properly when it wraps. Oh boy let's keep writing to make sure this is long enough to actually wrap for everyone. Oh, you can *put* **Markdown** into a blockquote. 
</code></pre>

<p spaces-before="0">
  ::: 팁 QOwnNotes에서 블록 따옴표를 완전히 강조 표시하거나 <em x-id="3">편집기 설정</em>에서 블록 따옴표 문자만 강조 표시하도록 지정할 수 있습니다
</p>

<p spaces-before="0">
  <a href="./shortcuts.md">단축키</a> <kbd> Ctrl + Shift + B</kbd>을 사용하여 텍스트를 블록 따옴표로 표시할 수 있습니다. :::
</p>

<h2 spaces-before="0">
  수평 규칙
</h2>

<p spaces-before="0">
  수평 규칙을 얻는 세 가지 방법이 있습니다: 하이픈, 별표 또는 밑줄을 사용할 수 있습니다.
</p>

<pre><code class="markdown">Three or more...

Hyphens

---

Asterisks

***

Underscores

___
</code></pre>

<h2 spaces-before="0">
  줄 바꿈
</h2>

<ul>
  <li>
    문단을 하나 이상의 행으로 분할하여 편집할 수 있지만, 문단은 계속해서 중단 없이 단일 문단으로 렌더링됩니다.
  </li>
  <li>
    두 개의 공백으로 선을 종료하여 문단 내부에서 줄 바꿈을 수행할 수 있습니다.
  </li>
  <li>
    빈 줄로 구분하여 별도의 단락을 만들 수 있습니다.
  </li>
</ul>

<p spaces-before="0">
  ::: 팁 <kbd>⇧ Shift</kbd> + <kbd>Return</kbd>으로 공백 2개와 줄 바꿈을 입력할 수 있습니다. :::
</p>

<pre><code class="markdown">Here's a line for us to start with.

This line is separated from the one above by two newlines, so it will be a *separate paragraph*.

This line is also begins a separate paragraph, but...  
This line is only separated by two trailing spaces and a single newline, so it's a separate line in the *same paragraph*.
</code></pre>

<p spaces-before="0">
  ::: 팁
후행 공백은 편집기에서 기본적으로 강조 표시됩니다.
:::
</p>

<h2 spaces-before="0">
  주석
</h2>

<p spaces-before="0">
  설명은 미리보기에 표시되지 않습니다.
</p>

<pre><code class="markdown">[comment]: # (This comment will not appear in the preview)

&lt;!-- HTML comments are also hidden --&gt;
</code></pre>

<p spaces-before="0">
  ::: 팁
노트의 선행 html 주석 블록은 자동 노트 파일 이름 생성에서도 무시됩니다.
:::
</p>

<h2 spaces-before="0">
  확인란 목록
</h2>

<p spaces-before="0">
  확인란 목록을 사용하여 간단한 작업관리 목록을 작성할 수 있습니다.
</p>

<pre><code class="markdown">- [x] done
- [ ] todo
</code></pre>

<p spaces-before="0">
  ::: 팁
미리보기에서 확인란을 선택하거나 선택 취소할 수 있습니다.
:::
</p>

<h2 spaces-before="0">
  전문
</h2>

<p spaces-before="0">
  QOwnNotes에서 전문 (예: YAML)을 사용하여 추가 메타 정보를 추가할 수 있습니다. <strong x-id="1">미리보기에 표시되지 않으며</strong> <strong x-id="1">자동 노트 파일 이름 생성을 방해하지 않습니다</strong>.
</p>

<pre><code class="markdown">---
title: Some name
description: Some description
---

# Note headline starts here

Some text
</code></pre>

<p spaces-before="0">
  이 예제 노트의 파일 이름은 <code>Note headline starts here.md</code>입니다.
</p>
