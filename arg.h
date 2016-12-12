Last-Modified: Mon, 12 Dec 2016 01:13:50 GMT
Expires: Mon, 12 Dec 2016 01:18:50 GMT

<!DOCTYPE html>
<html lang='en'>
<head>
<title>arg.h - addrom - Tool for adding a rom to a PB3 list.dat</title>
<meta name='generator' content='cgit v1.0'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://git.fifth.space/addrom/atom/arg.h?h=master' type='application/atom+xml'/>
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
<a href='/addrom/'>summary</a><a href='/addrom/refs/'>refs</a><a href='/addrom/log/arg.h'>log</a><a class='active' href='/addrom/tree/arg.h'>tree</a><a href='/addrom/commit/arg.h'>commit</a><a href='/addrom/diff/arg.h'>diff</a></td><td class='form'><form class='right' method='get' action='/addrom/log/arg.h'>
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
<div class='path'>path: <a href='/addrom/tree/'>root</a>/<a href='/addrom/tree/arg.h'>arg.h</a></div><div class='content'>blob: b8f80f53c416d529eeb44ab538a78b43b1499ee1 (<a href='/addrom/plain/arg.h'>plain</a>)
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
<a id='n56' href='#n56'>56</a>
<a id='n57' href='#n57'>57</a>
<a id='n58' href='#n58'>58</a>
<a id='n59' href='#n59'>59</a>
<a id='n60' href='#n60'>60</a>
<a id='n61' href='#n61'>61</a>
<a id='n62' href='#n62'>62</a>
<a id='n63' href='#n63'>63</a>
</pre></td>
<td class='lines'><pre><code>/*
 * Copy me if you can.
 * by 20h
 */

#ifndef ARG_H__
#define ARG_H__

extern char *argv0;

/* use main(int argc, char *argv[]) */
#define ARGBEGIN	for (argv0 = *argv, argv++, argc--;\
					argv[0] &amp;&amp; argv[0][1]\
					&amp;&amp; argv[0][0] == '-';\
					argc--, argv++) {\
				char argc_;\
				char **argv_;\
				int brk_;\
				if (argv[0][1] == '-' &amp;&amp; argv[0][2] == '\0') {\
					argv++;\
					argc--;\
					break;\
				}\
				for (brk_ = 0, argv[0]++, argv_ = argv;\
						argv[0][0] &amp;&amp; !brk_;\
						argv[0]++) {\
					if (argv_ != argv)\
						break;\
					argc_ = argv[0][0];\
					switch (argc_)

/* Handles obsolete -NUM syntax */
#define ARGNUM				case '0':\
					case '1':\
					case '2':\
					case '3':\
					case '4':\
					case '5':\
					case '6':\
					case '7':\
					case '8':\
					case '9'

#define ARGEND			}\
			}

#define ARGC()		argc_

#define ARGNUMF(base)	(brk_ = 1, strtol(argv[0], NULL, (base)))

#define EARGF(x)	((argv[0][1] == '\0' &amp;&amp; argv[1] == NULL)?\
				((x), abort(), (char *)0) :\
				(brk_ = 1, (argv[0][1] != '\0')?\
					(&amp;argv[0][1]) :\
					(argc--, argv++, argv[0])))

#define ARGF()		((argv[0][1] == '\0' &amp;&amp; argv[1] == NULL)?\
				(char *)0 :\
				(brk_ = 1, (argv[0][1] != '\0')?\
					(&amp;argv[0][1]) :\
					(argc--, argv++, argv[0])))

#endif
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v1.0</a> at 2016-12-12 01:13:50 +0000</div>
</div> <!-- id=cgit -->
</body>
</html>
