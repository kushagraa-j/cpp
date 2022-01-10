update:
	git add -A
	git commit -m "updated at $(shell date +%d-%b-%I:%M%p)"
	git push
