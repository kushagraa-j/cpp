update:
	git add -A
	git commit -m "updated at $(shell date +%drd-%b-%I:%M%p)"
	git push
