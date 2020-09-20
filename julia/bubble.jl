const nr_runs = 100
const lst_size = 10000

using Random

function bubble!(lst::Vector{Int64})
    swapped = true
    while swapped
        swapped = false
        for j in 1:lst_size-1
            if lst[j] > lst[j+1]
                lst[j], lst[j+1] = lst[j+1], lst[j]
                swapped = true
            end
        end
    end
end

function is_sorted(lst::Vector{Int64})
    for j in 1:lst_size-1
        if lst[j] > lst[j+1]
            return false
        end
    end
    return true
end

function main()
    rng = MersenneTwister(1234)
    lst = collect(1:lst_size)

    for i in 1:nr_runs
        shuffle!(rng, lst)
        bubble!(lst)
        @assert(is_sorted(lst))
    end
end

main()
