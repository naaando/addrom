Last-Modified: Mon, 12 Dec 2016 01:13:57 GMT
Expires: Mon, 12 Dec 2016 01:18:57 GMT

<!DOCTYPE html>
<html lang='en'>
<head>
<title>config.mk - addrom - Tool for adding a rom to a PB3 list.dat</title>
<meta name='generator' content='cgit v1.0'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://git.fifth.space/addrom/atom/config.mk?h=master' type='application/atom+xml'/>
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
<a href='/addrom/'>summary</a><a href='/addrom/refs/'>refs</a><a href='/addrom/log/config.mk'>log</a><a class='active' href='/addrom/tree/config.mk'>tree</a><a href='/addrom/commit/config.mk'>commit</a><a href='/addrom/diff/config.mk'>diff</a></td><td class='form'><form class='right' method='get' action='/addrom/log/config.mk'>
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
<div class='path'>path: <a href='/addrom/tree/'>root</a>/<a href='/addrom/tree/config.mk'>config.mk</a></div><div class='content'>blob: 0f68de5fa6de7951dc917be9ccb1656bcca15198 (<a href='/addrom/plain/config.mk'>plain</a>)
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
</pre></td>
<td class='lines'><pre><code># paths
PREFIX = /usr/local
MANPREFIX = ${PREFIX}/share/man

# includes and libs
INCS = -I. -I/usr/include
LIBS = -L/usr/lib

# flags
CPPFLAGS += -D_POSIX_SOURCE -D_XOPEN_SOURCE=600
CFLAGS += -std=c99 -pedantic -Wall -Os -s ${INCS} ${CPPFLAGS}
LDFLAGS += -s ${LIBS}

# compiler and linker
# CC = cc
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v1.0</a> at 2016-12-12 01:13:57 +0000</div>
</div> <!-- id=cgit -->
</body>
</html>
