find . -type f -name "*.sh" | sed 's/\.sh$//g' | awk 'BEGIN{FS="/"}{print $NF}'
