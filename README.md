# A mirror of <http://git.fifth.space/addrom/>

## This isn't my work, I'm just redistributing due to instabilities on original server, since it's allowed by MIT License

Last-Modified: Mon, 12 Dec 2016 01:13:15 GMT
Expires: Mon, 12 Dec 2016 01:18:15 GMT

<html lang='en'>
<head>
<title>README.md - addrom - Tool for adding a rom to a PB3 list.dat</title>
<meta name='generator' content='cgit v1.0'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://git.fifth.space/addrom/atom/README.md?h=master' type='application/atom+xml'/>
<link rel='vcs-git' href='git://git.fifth.space/addrom' title='addrom Git repository'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/'><img src='/cgit.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/'>index</a> : <a title='addrom' href='/addrom/'>addrom</a></td><td class='form'><form method='get'>
<select name='h' onchange='this.form.submit();'>
<option value='master' selected='selected'>master</option>
</select> <input type='submit' value='switch'/></form></td></tr>
<tr><td class='sub'>Tool for adding a rom to a PB3 list.dat</td><td class='sub right'>Quentin Rameau &lt;quinq@fifth.space&gt;</td></tr></table>
<table class='tabs'><tr><td>
<a href='/addrom/'>summary</a><a href='/addrom/refs/'>refs</a><a href='/addrom/log/README.md'>log</a><a class='active' href='/addrom/tree/README.md'>tree</a><a href='/addrom/commit/README.md'>commit</a><a href='/addrom/diff/README.md'>diff</a></td><td class='form'><form class='right' method='get' action='/addrom/log/README.md'>
<select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
<option value='range'>range</option>
</select>
<input class='txt' type='text' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='path'>path: <a href='/addrom/tree/'>root</a>/<a href='/addrom/tree/README.md'>README.md</a></div><div class='content'>blob: ca0762d928a7930f2a377e0a10b90994e395c54c (<a href='/addrom/plain/README.md'>plain</a>)
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a id='n1' href='#n1'>1</a>
<a id='n2' href='#n2'>2</a>
<a id='n3' href='#n3'>3</a>
<a id='n4' href='#n4'>4</a>
<a id='n5' href='#n5'>5</a>
<a id='n6' href='#n6'>6</a>
<a id='n7' href='#n7'>7</a>
<a id='n8' href='#n8'>8</a>
<a id='n9' href='#n9'>9</a>
<a id='n10' href='#n10'>10</a>
<a id='n11' href='#n11'>11</a>
<a id='n12' href='#n12'>12</a>
<a id='n13' href='#n13'>13</a>
<a id='n14' href='#n14'>14</a>
<a id='n15' href='#n15'>15</a>
<a id='n16' href='#n16'>16</a>
<a id='n17' href='#n17'>17</a>
<a id='n18' href='#n18'>18</a>
<a id='n19' href='#n19'>19</a>
<a id='n20' href='#n20'>20</a>
<a id='n21' href='#n21'>21</a>
<a id='n22' href='#n22'>22</a>
<a id='n23' href='#n23'>23</a>
<a id='n24' href='#n24'>24</a>
<a id='n25' href='#n25'>25</a>
<a id='n26' href='#n26'>26</a>
<a id='n27' href='#n27'>27</a>
<a id='n28' href='#n28'>28</a>
<a id='n29' href='#n29'>29</a>
<a id='n30' href='#n30'>30</a>
<a id='n31' href='#n31'>31</a>
<a id='n32' href='#n32'>32</a>
<a id='n33' href='#n33'>33</a>
<a id='n34' href='#n34'>34</a>
<a id='n35' href='#n35'>35</a>
<a id='n36' href='#n36'>36</a>
<a id='n37' href='#n37'>37</a>
<a id='n38' href='#n38'>38</a>
<a id='n39' href='#n39'>39</a>
<a id='n40' href='#n40'>40</a>
<a id='n41' href='#n41'>41</a>
<a id='n42' href='#n42'>42</a>
<a id='n43' href='#n43'>43</a>
<a id='n44' href='#n44'>44</a>
<a id='n45' href='#n45'>45</a>
<a id='n46' href='#n46'>46</a>
<a id='n47' href='#n47'>47</a>
<a id='n48' href='#n48'>48</a>
<a id='n49' href='#n49'>49</a>
<a id='n50' href='#n50'>50</a>
<a id='n51' href='#n51'>51</a>
<a id='n52' href='#n52'>52</a>
<a id='n53' href='#n53'>53</a>
<a id='n54' href='#n54'>54</a>
<a id='n55' href='#n55'>55</a>
</pre></td>
<td class='lines'><pre><code>addrom
======

Simple tool to add a rom entry to a PB3 list.dat.

addrom lets you add a rom entry into a Pandora's Box 3 list.dat rom file.
It reads an input file or starts from scratch, writes rom fields according the
file format, calculates the total number of entries and modifies that reference
in the file, and writes the resulting new file to the input file or another
output file.

Works only for Pandora's Box 3 520+20/540 in 1 (jamma).

## Installation

Edit config.mk for customizing compilation options and installation paths.

        make            (building)
        make install    (install, may need privileges, default in /usr/local)
        make clean      (cleaning)

## Usage

Read the manual page.

## File format

The file is composed of a header and a concatenation of rom entries
with the following fields:

        HEADER                 16B
            Header size         4B
            Number of games     4B
        ENTRY                 120B
            Chinese name       64B
            English name       32B
            ROM name           16B
            Magic number (?)    8B
        ENTRY...

The number of games field is calculated in the following manner:

        Field = (decimal number of games &lt;&lt; 32 &lt;&lt; 6) / 0x88888888

You can reverse the calculation with this:

        Decimal number of games = (field * 0x88888889) &gt;&gt; 32 &gt;&gt; 6

## Thanks

To Meng Xipeng &lt;mengxipeng@gmail.com&gt; for the instructions about the list.dat
file format.

To Maastaz Raïk ([Youtube channel](https://www.youtube.com/user/maastahraik))
for testing on real hardware the correctness of the generated list.dat files.
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v1.0</a> at 2016-12-12 01:13:15 +0000</div>
</div> <!-- id=cgit -->
</body>
</html>
